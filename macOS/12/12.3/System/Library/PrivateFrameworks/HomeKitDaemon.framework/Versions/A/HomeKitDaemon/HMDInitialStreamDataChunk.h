@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk

@property (readonly, copy) NSString *type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithStreamDataDictionary:(id)a0;
- (id)initWithData:(id)a0 isLast:(BOOL)a1 type:(id)a2;

@end
