@class NSString;

@interface SAOnBehalfOfSingle : NSObject <NSCopying> {
    int _proximatePid;
    int _originPid;
    NSString *_proximateName;
    NSString *_originName;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
