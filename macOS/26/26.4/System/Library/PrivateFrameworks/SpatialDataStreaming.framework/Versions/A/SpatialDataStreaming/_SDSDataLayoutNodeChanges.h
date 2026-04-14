@interface _SDSDataLayoutNodeChanges : NSObject {
    unsigned char _changeTypeFlattenedLayout;
    unsigned int _replacementFlattenedLayout;
}

- (void)omitFlattenedLayout;
- (void)preserveFlattenedLayout;
- (void)replaceFlattenedLayout:(id)a0;

@end
