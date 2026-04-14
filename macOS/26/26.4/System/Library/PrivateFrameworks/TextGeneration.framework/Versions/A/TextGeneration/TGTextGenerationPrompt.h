@class NSString;

@interface TGTextGenerationPrompt : NSObject <NSCopying, NSMutableCopying> {
    NSString *_description;
}

@property (copy) NSString *contextText;
@property (readonly, copy) NSString *instructionText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithInstructionText:(id)a0;

@end
