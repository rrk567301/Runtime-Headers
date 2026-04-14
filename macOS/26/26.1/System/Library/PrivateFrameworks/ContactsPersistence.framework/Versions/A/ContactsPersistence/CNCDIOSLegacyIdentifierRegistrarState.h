@class NSString;

@interface CNCDIOSLegacyIdentifierRegistrarState : NSObject <NSCopying>

@property (copy, nonatomic) NSString *namespaceIdentifier;
@property (nonatomic) unsigned long long maxContactSequenceNumberInUse;
@property (nonatomic) unsigned long long maxGroupSequenceNumberInUse;
@property (nonatomic) unsigned long long maxContainerSequenceNumberInUse;
@property (nonatomic) unsigned long long maxInfoSequenceNumberInUse;
@property (nonatomic) unsigned long long maxMultivalueSequenceNumberInUse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
