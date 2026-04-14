@interface MDSToken : NSObject {
    unsigned int _retainCount;
    unsigned int _tokenID;
}

+ (void)initialize;

- (unsigned int)tokenID;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
