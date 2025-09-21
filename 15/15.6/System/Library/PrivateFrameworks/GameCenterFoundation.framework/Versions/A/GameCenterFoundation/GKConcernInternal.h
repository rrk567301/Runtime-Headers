@class NSString, GKPlayerInternal;

@interface GKConcernInternal : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) unsigned int concernID;
@property (copy, nonatomic) NSString *message;

+ (char)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
