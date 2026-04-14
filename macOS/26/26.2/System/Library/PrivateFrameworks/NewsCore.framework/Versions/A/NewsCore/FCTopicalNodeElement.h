@class NSString, NSSet;

@interface FCTopicalNodeElement : NSObject <NSCopying> {
    NSString *_identifier;
    NSSet *_topics;
    double _score;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
