@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying> {
    unsigned long long _threadID;
    NSString *_threadDescription;
}

@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) NSString *threadDescription;

+ (void)initialize;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)threadID;
- (id)initWithDescription:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_allCurrentThreadIDs;
- (id)_initWithThreadID:(unsigned long long)a0 description:(id)a1;
- (id)threadDescription;

@end
