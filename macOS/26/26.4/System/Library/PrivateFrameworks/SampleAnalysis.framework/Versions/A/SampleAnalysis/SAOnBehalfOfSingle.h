@class NSString;

@interface SAOnBehalfOfSingle : NSObject <NSCopying> {
    int _proximatePid;
    int _originPid;
    NSString *_proximateName;
    NSString *_originName;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
