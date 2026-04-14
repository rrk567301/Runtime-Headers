@class NSString;

@interface TGTextGenerationDecodingPolicy : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly) unsigned long long type;

+ (id)defaultDecodingPolicy;

- (id)initWithType:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
