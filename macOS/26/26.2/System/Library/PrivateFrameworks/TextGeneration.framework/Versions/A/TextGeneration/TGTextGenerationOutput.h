@class NSString;

@interface TGTextGenerationOutput : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, copy) NSString *text;
@property (readonly) double score;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)a0 score:(double)a1;

@end
