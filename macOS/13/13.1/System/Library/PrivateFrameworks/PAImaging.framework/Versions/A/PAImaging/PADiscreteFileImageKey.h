@class NSString, NSDictionary, NSURL, NSDate;

@interface PADiscreteFileImageKey : NSObject <NSCopying> {
    NSDate *_modDate;
}

@property (readonly) NSURL *url;
@property (readonly) NSDictionary *cgOptions;
@property (readonly) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)subsampleFactor;
- (id)initWithURL:(id)a0 cgOptions:(id)a1 name:(id)a2;
- (id)copyWithSubsampleFactor:(unsigned long long)a0;

@end
