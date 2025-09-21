@class NSString;

@interface MSVSystemDialogTextField : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isSecure) char secure;
@property (nonatomic) long long keyboardType;

+ (id)textFieldWithTitle:(id)a0;
+ (id)textFieldWithTitle:(id)a0 secure:(char)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
