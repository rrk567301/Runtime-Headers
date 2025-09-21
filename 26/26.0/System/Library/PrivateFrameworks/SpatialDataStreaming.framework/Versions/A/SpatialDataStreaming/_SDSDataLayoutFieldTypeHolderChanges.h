@interface _SDSDataLayoutFieldTypeHolderChanges : NSObject {
    unsigned char _replacementFieldTypeType;
    unsigned char _changeTypeFieldType;
    unsigned int _replacementFieldType;
}

- (void)omitFieldType;
- (void)preserveFieldType;
- (void)replaceFieldTypeWithDataLayoutFieldInfo:(id)a0;
- (void)replaceFieldTypeWithDataLayoutSublayoutInfo:(id)a0;

@end
