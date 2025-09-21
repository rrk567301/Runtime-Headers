@class NSString, NSDictionary;

@interface CUNANPairingPromptInfo : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *textInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSession:(id)a0;

@end
