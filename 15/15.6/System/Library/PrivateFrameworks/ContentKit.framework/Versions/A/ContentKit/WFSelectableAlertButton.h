@class NSString, WFImage;

@interface WFSelectableAlertButton : WFAlertButton

@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) WFImage *image;
@property (nonatomic, getter=isSelected) char selected;
@property (readonly, nonatomic) char stickySelection;

+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 selected:(char)a2 stickySelection:(char)a3 style:(long long)a4 handler:(id /* block */)a5 image:(id)a6;
+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 selected:(char)a2 style:(long long)a3 handler:(id /* block */)a4;

- (void).cxx_destruct;

@end
