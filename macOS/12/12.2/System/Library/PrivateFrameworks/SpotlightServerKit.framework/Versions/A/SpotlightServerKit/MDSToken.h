@interface MDSToken : NSObject {
    unsigned int _retainCount;
    unsigned int _tokenID;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (unsigned int)tokenID;

@end
