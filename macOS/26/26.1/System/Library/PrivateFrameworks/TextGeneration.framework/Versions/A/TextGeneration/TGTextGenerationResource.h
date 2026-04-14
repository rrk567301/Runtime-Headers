@class NSString, NSURL;

@interface TGTextGenerationResource : NSObject <NSCopying, NSMutableCopying> {
    NSString *_description;
}

@property (copy) NSString *e5FunctionName;
@property (readonly) unsigned long long type;
@property (readonly, copy) NSURL *url;

+ (id)createWithResourceDict:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 url:(id)a1;

@end
