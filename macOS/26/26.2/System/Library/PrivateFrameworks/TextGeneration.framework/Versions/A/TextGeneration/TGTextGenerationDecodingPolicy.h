@class NSString;

@interface TGTextGenerationDecodingPolicy : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly) unsigned long long type;

+ (id)defaultDecodingPolicy;

- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
