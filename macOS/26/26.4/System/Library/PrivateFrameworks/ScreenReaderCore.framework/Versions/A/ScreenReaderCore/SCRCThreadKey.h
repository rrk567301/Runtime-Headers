@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying> {
    unsigned long long _threadID;
    NSString *_threadDescription;
}

@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) NSString *threadDescription;

+ (void)initialize;

- (id)initWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDescription:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)threadID;
- (void)dealloc;
- (id)_allCurrentThreadIDs;
- (id)_initWithThreadID:(unsigned long long)a0 description:(id)a1;
- (id)threadDescription;

@end
