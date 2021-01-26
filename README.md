# Cpp
VUA ARTHUR VÀ CÁC HIỆP SĨ BÀN TRÒN
1. Giới thiệu

Vua Arthur là một vị vua huyền thoại trong lịch sử nước Anh, là người dẫn dắt các hiệp sĩ Bàn Tròn (Knights of the Round Table) chuyên chiến đấu để giữ gìn và bảo vệ công lý. Gần như bất khả chiến bại trên chiến trường, vua Arthur và các hiệp sĩ Bàn Tròn chỉ gặp các đối thủ xứng tầm khi đương đầu cùng các chiến binh Saxon, được dẫn dắt bởi vua Cerdic, trong cuộc chiến quyết định ngai vàng của nước Anh. Theo tinh thần thượng võ, họ quyết định sẽ tổ chức các cuộc đấu tay đôi giữa các đại diện của hai bên để giải quyết mọi vấn đề tranh chấp.

Các hiệp sĩ Bàn Tròn và các chiến binh Saxon đều là các dũng sĩ thiện chiến, mỗi trận đánh tay đôi giữa họ luôn là một cuộc chiến khốc liệt mà sự thắng bại đôi khi không chỉ quyết định bởi tài nghệ của các đấu sĩ mà còn bởi các yếu tố khác như vũ khí, áo giáp, địa hình, v.v… Thông thường, một trận chiến như vậy chỉ kết thúc khi một trong hai đấu sĩ tử thương.

Do vậy, trước mỗi trận chiến tay đôi, vua Arthur luôn lo lắng cho số phận của hiệp sĩ Bàn Tròn anh em của mình. Vua Arthur không biết rằng vào khoảng 1500 năm sau, máy tính có thể giúp ông ước lượng được khả năng thắng bại của mỗi hiệp sĩ trước mỗi cuộc chiến.

2. Yêu cầu
Trong bài tập lớn này, sinh viên sẽ được cung cấp chứa dữ liệu nhập, bao gồm các thông số cho một trận chiến tay đôi giữa một hiệp sĩ Bàn Tròn và một chiến binh Saxon. Chương trình sẽ tính toán và in ra màn hình xác suất chiến thắng của hiệp sĩ Bàn Tròn.
3. Dữ liệu nhập
Thông tin về hiệp sĩ Bàn Tròn và chiến binh Saxon tham gia vào trận chiến tay đôi. Cấu trúc như sau:

429
1
325
1
1

Giải thích:
• baseHP1: Chỉ số sức mạnh cơ bản của hiệp sĩ Bàn Tròn, là một số nguyên từ 99 đến 999
• wp1: Thông tin về vũ khí của hiệp sĩ Bàn Tròn, nhận một trong các giá trị 0,1,2,3
• baseHP2: Chỉ số sức mạnh cơ bản của chiến binh Saxon, là một số nguyên từ 1 đến 888
• wp2: Thông tin về vũ khí của chiến binh Saxon, nhận một trong các giá trị 0,1,2,3
• ground: Thông tin về địa hình nơi diễn ra cuộc chiến tay đôi, là một số nguyên từ 1 đến 999

4. Dữ liệu xuất

Chương trình sẽ xuất trực tiếp ra màn hình giá trị xác suất p(R) dự đoán về khả năng chiến thắng của hiệp sĩ Bàn Tròn trong trận chiến tay đôi. Giá trị p(R) sẽ được tính bằng công thức sau:

Trong đó realHP1 và realHP2 là chỉ số sức mạnh thật của hiệp sĩ Bàn Tròn và chiến binh Saxon khi chiến đấu. Chỉ số sức mạnh thật này sẽ được tính dựa trên chỉ số sức mạnh cơ bản và vũ khí được sử dụng, được mô tả như sau:

i) wpi = 1: vũ khí bình thường được sử dụng. Khi đó realHPi = baseHPi
ii) wpi = 0: đấu sĩ bỏ quên vũ khí và phải chiến đấu bằng tay không. Khi đó realHPi = baseHPi /10 (chỉ tính phần nguyên).

Ngoài ra đấu sĩ sẽ có thêm lợi thế nếu được chiến đấu trên địa hình quen thuộc, được mô tả như sau:

iii) Nếu ground = baseHPi, thì realHPi sẽ được tăng thêm 10% sau khi đã tính điểm vũ khí như đã mô tả ở mục i và ii. Tuy nhiên nếu realHPi vượt quá 999 thì sẽ được tự động giảm xuống giá trị 999

Giá trị in ra màn hình sẽ có dạng 0.XX (tức là phần thập phân có đúng hai chữ số). KHÔNG IN THÊM BẤT KỲ THÔNG TIN NÀO KHÁC RA MÀN HÌNH (kể cả dấu xuống hàng).

Ví dụ 1: Nếu baseHP1 = 450, wp1= 1, baseHP2 = 150, wp2= 1, ground = 302, giá trị in ra màn hình sẽ là (450-150+999)/2000 = 0.65.

Ví dụ 2: Nếu baseHP1 = 807, wp1= 0, baseHP2 = 750, wp2= 1, ground = 156, giá trị in ra màn hình sẽ là (80-750+999)/2000 = 0.16.

Ví dụ 3: Nếu baseHP1 = 417, wp1= 1, baseHP2 = 416, wp2= 0, ground = 417, giá trị in ra màn hình sẽ là (417*1.1-41+999)/2000 = 0.71.

Ví dụ 4: Nếu baseHP1 = 235, wp1= 1, baseHP2 = 624, wp2= 0, ground = 624, giá trị in ra màn hình sẽ là (235-62*1.1+999)/2000 = 0.58.

Ví dụ 5: Nếu baseHP1 = 998, wp1= 1, baseHP2 = 517, wp2= 1, ground = 998, giá trị in ra màn hình sẽ là (999-517+999)/2000 = 0.74.

Ngoài ra chương trình còn chấp nhận một số trường hợp dữ liệu đặc biệt như sau:

iv) Nếu wpi = 2, vũ khí được sử dụng bao gồm một áo giáp đặc biệt được làm từ mithril. Không vũ khí nào có thể xuyên thủng được áo giáp này, vì vậy đấu sĩ mặc áo giáp này sẽ không bao giờ thua trận. Trong trường hợp này realHPi của đấu sĩ vẫn được tính qua các mô tả ở mục i và mục iii và kết quả in ra màn hình vẫn được tính như cũ; tuy nhiên nếu realHPi thấp hơn chỉ số tương ứng của đối thủ, giá trị in ra màn hình sẽ là 0.50 (trận đấu hoà).

Ví dụ 6: Nếu baseHP1 = 238, wp1= 2, baseHP2 = 113, wp2= 1, ground = 145, giá trị in ra màn hình sẽ là (238-113+999)/2000 = 0.56.

Ví dụ 7: Nếu baseHP1 = 738, wp1= 1, baseHP2 = 45, wp2= 2, ground = 26, giá trị in ra màn hình sẽ là 0.50.

v) Nếu wpi = 3, vũ khí sử dụng là gươm Excalibur. Đối với một chiến binh Saxon, thanh gươm này cũng chỉ là một vũ khí bình thường, vì vậy chỉ số realHP2 vẫn được tính bình thường sử dụng mô tả ở mục i và iii. Nếu một hiệp sĩ Bàn Tròn sử dụng thanh gươm này, chỉ số realHP1 sẽ được nhân đôi sau khi đã tính như đã mô tả ở mục i và iii. Tuy nhiên nếu chỉ số realHP1 sau khi tính toán cao hơn 999, nó sẽ được tự động giảm xuống 999. Lưu ý là khi một hiệp sĩ Bàn Tròn sử dụng gươm Excalibur, nếu đối thủ có áo giáp mithril thì áo giáp này cũng mất tác dụng, trở thành vũ khí bình thường.

Ví dụ 8: Nếu baseHP1 = 414, wp1= 1, baseHP2 = 415, wp2= 3, ground = 199, giá trị in ra màn hình sẽ là (414-415+999)/2000 = 0.50.

Ví dụ 9: Nếu baseHP1 = 221, wp1= 3, baseHP2 = 600, wp2= 1, ground = 221, giá trị in ra màn hình sẽ là (221*1.1*2-600+999)/2000 = 0.44.

Ví dụ 10: Nếu baseHP1 = 612, wp1= 3, baseHP2 = 800, wp2= 1, ground = 800, giá trị in ra màn hình sẽ là (999-800*1.1+999)/2000 = 0.56.

Ví dụ 11: Nếu baseHP1 = 189, wp1= 3, baseHP2 = 517, wp2= 2, ground = 444, giá trị in ra màn hình sẽ là (189*2 – 517 + 999 )/2000 = 0.43.

vi) Nếu baseHP1 = 999, đích thân Vua Arthur ra trận. Kết quả là Arthur luôn luôn thắng bất chấp đối thủ là ai và sử dụng vũ khí gì. Kết quả in ra màn hình là 1. (Không phải ở dạng 0.XX như bình thường)

vii) Nếu baseHP2 = 888, đích thân Cerdic ra trận. Không hiệp sĩ Bàn Tròn nào đủ sức chống lại Cerdic, dù sử dụng bất kỳ vũ khí gì. Trong trường hơp này kết quả in ra màn hình là 0.00. Tuy nhiên nếu đối thủ của Cerdic là Vua Arthur, kết quả sẽ được xử lý như mô tả ở mục vi.

viii) Nếu baseHPi là một số nguyên tố, đấu sĩ tương ứng thực chất là một Paladin cải trang. Vì Paladin có khả năng dùng phép thuật khi giao tranh, nên chắc chắn sẽ luôn chiến thắng bất chấp đối phương dùng vũ khí gì. Paladin chỉ thua khi gặp Arthur, Cerdic hoặc một Paladin có chỉ số baseHP cao hơn. Nếu Paladin chiến thắng là một hiệp sĩ Bàn Tròn, màn hình sẽ in ra giá trị 0.99; nếu Paladin chiến thắng là một chiến binh Saxon, màn hình sẽ in ra giá trị 0.01. Trường hợp hai Paladin có chỉ số baseHP bằng nhau, màn hình sẽ in ra giá trị 0.50. Trường hợp Paladin gặp Arthur hoặc Cerdic, kết quả được in ra như mô tả ở mục vi và VII
