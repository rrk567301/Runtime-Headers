@class NSArray, NSMutableArray, NSMutableDictionary;

@interface GTShaderProfilerStringCache : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    NSMutableDictionary *_stringDict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *strings;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)addString:(id)a0;
- (id)init;
- (id)stringFromIndex:(unsigned long long)a0;

@end
