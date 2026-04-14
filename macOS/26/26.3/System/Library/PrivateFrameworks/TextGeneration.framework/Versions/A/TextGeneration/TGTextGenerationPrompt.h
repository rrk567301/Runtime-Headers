@class NSString;

@interface TGTextGenerationPrompt : NSObject <NSCopying, NSMutableCopying> {
    NSString *_description;
}

@property (copy) NSString *contextText;
@property (readonly, copy) NSString *instructionText;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithInstructionText:(id)a0;

@end
