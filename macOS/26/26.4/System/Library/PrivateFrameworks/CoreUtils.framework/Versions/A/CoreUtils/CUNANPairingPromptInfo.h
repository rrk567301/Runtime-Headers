@class NSString, NSDictionary;

@interface CUNANPairingPromptInfo : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *textInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDataSession:(id)a0;

@end
