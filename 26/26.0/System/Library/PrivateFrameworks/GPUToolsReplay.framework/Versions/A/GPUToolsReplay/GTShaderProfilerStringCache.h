@class NSArray, NSMutableArray, NSMutableDictionary;

@interface GTShaderProfilerStringCache : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    NSMutableDictionary *_stringDict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *strings;

- (unsigned long long)addString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)stringFromIndex:(unsigned long long)a0;

@end
