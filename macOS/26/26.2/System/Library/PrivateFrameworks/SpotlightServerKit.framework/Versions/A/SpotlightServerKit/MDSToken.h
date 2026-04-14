@interface MDSToken : NSObject {
    unsigned int _retainCount;
    unsigned int _tokenID;
}

+ (void)initialize;

- (unsigned int)tokenID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
