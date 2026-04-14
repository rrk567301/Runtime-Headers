@class NSData, PKPass;

@interface SGWalletPassViewManager : NSObject

@property (readonly, nonatomic) NSData *passData;
@property (readonly, nonatomic) PKPass *pass;

- (id)organizationName;
- (id)passes;
- (id)title;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)passStyle;
- (double)passTimeInterval;

@end
