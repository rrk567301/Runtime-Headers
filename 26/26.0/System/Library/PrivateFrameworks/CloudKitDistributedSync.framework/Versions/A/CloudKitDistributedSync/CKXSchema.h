@interface CKXSchema : NSObject <NSCopying> {
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } structTokens;
    struct vector<CKXStructProperties, std::allocator<CKXStructProperties>> { struct *__begin_; struct *__end_; struct *__cap_; } structTokenToStructProperties;
    struct vector<std::vector<unsigned long long>, std::allocator<std::vector<unsigned long long>>> { void *__begin_; void *__end_; void *__cap_; } structTokenToFieldTokens;
    struct vector<CKXFieldProperties, std::allocator<CKXFieldProperties>> { struct *__begin_; struct *__end_; struct *__cap_; } fieldTokenToFieldProperties;
}

@property (nonatomic) unsigned long long nextIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)defineFieldForStruct:(unsigned long long)a0;
- (long long)newIdentifier;

@end
