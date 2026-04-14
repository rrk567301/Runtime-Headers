@class NSString;

@interface TGTextGenerationOutput : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, copy) NSString *text;
@property (readonly) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithText:(id)a0 score:(double)a1;

@end
