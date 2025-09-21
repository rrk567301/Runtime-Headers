@interface _SDSDataLayoutSublayoutInfoChanges : NSObject {
    unsigned char _changeTypeSubLayoutNestedName;
    unsigned int _replacementSubLayoutNestedName;
    unsigned char _changeTypeLayoutInfo;
    unsigned int _replacementLayoutInfo;
}

- (void)omitLayoutInfo;
- (void)omitSubLayoutNestedName;
- (void)preserveLayoutInfo;
- (void)preserveSubLayoutNestedName;
- (void)replaceLayoutInfo:(id)a0;
- (void)replaceSubLayoutNestedName:(id)a0;

@end
