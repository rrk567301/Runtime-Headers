@class NSString, NSArray;

@interface _EARCommandTagging : NSObject <NSCopying> {
    struct unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>> { struct { struct CommandTagging *__ptr_; } ; } _tagging;
}

@property (readonly, copy, nonatomic) NSString *commandId;
@property (readonly, copy, nonatomic) NSArray *tagSequence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)_initWithQuasarCommandTagging:(const void *)a0;
- (id)tokensForTag:(id)a0;

@end
