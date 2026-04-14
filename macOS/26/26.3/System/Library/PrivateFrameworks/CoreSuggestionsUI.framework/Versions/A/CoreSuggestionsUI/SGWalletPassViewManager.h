@class NSData, PKPass;

@interface SGWalletPassViewManager : NSObject

@property (readonly, nonatomic) NSData *passData;
@property (readonly, nonatomic) PKPass *pass;

- (id)organizationName;
- (id)initWithData:(id)a0;
- (id)passes;
- (id)title;
- (void).cxx_destruct;
- (id)passStyle;
- (double)passTimeInterval;

@end
