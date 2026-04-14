@class NSString;

@interface TGTextGenerationOutput : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, copy) NSString *text;
@property (readonly) double score;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithText:(id)a0 score:(double)a1;

@end
