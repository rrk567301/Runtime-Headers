@interface MDSToken : NSObject {
    unsigned int _retainCount;
    unsigned int _tokenID;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)tokenID;

@end
