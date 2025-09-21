@class NSUUID;

@interface HMDWatchSync : HMFObject <NSCopying>

@property unsigned long long syncOption;
@property (readonly, copy) NSUUID *identifier;
@property char inProgress;
@property (readonly) char isRetry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1 inProgress:(char)a2 isRetry:(char)a3;
- (id)initWithSyncOption:(unsigned long long)a0;

@end
