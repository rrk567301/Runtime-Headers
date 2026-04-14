@class NSString, NSArray;

@interface RMUIPasscodeViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property short symbol;
@property (retain) NSString *title;
@property (retain) NSArray *detailViewModels;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearModel;

@end
