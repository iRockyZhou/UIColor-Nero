# UIColor-Nero
使UIColor类可以根据十六进制色号来设置颜色的方法   
使UIColor类可以快速根据RGB设置颜色的方法   
使UIColor类可以快速根据RGBa设置颜色的方法   
使UIColor类可以获得随机色(可设置不透明度)的方法       

---

###For Example    
  
yourView.backgroundColor = [UIColor colorWithSixteenColorNumber:@"069ef6"];   
yourView.backgroundColor = RGB_COLOR(55, 155, 255) ;   
yourView.backgroundColor = RGB_COLOR(55, 155, 255， 1.0) ; 
yourView.backgroundColor = [UIColor randomColor];
yourView.backgroundColor = [UIColor randomColorWithAlpha:0.5];  
