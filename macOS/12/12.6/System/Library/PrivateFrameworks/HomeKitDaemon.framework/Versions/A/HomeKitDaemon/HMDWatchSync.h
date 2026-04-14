@class NSUUID;

@interface HMDWatchSync : HMFObject <NSCopying>

@property unsigned long long syncOption;
@property (readonly, copy) NSUUID *identifier;
@property BOOL inProgress;
@property (readonly) BOOL isRetry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1 inProgress:(BOOL)a2 isRetry:(BOOL)a3;
- (id)initWithSyncOption:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1;

@end
