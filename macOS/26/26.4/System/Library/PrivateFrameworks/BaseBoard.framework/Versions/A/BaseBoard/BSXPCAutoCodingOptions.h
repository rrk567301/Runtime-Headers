@class NSArray;

@interface BSXPCAutoCodingOptions : NSObject <BSXPCAutoCodingConfiguring>

@property (readonly, copy, nonatomic) NSArray *supportedCodings;

- (id)init;
- (void)dealloc;
- (void)setSupportedCodings:(id)a0;
- (void)addSupportedCoding:(id)a0;

@end
