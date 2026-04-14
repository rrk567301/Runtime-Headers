@class NSArray;

@interface BSXPCAutoCodingOptions : NSObject <BSXPCAutoCodingConfiguring>

@property (readonly, copy, nonatomic) NSArray *supportedCodings;

- (void)dealloc;
- (id)init;
- (void)setSupportedCodings:(id)a0;
- (void)addSupportedCoding:(id)a0;

@end
