@class NSString;
@protocol STStatusDomainDataDifferencing, STStatusDomainData, STStatusDomainDataDiff;

@interface STStatusDomainDataChangeRecordDiffEntry : NSObject <STStatusDomainDataChangeRecordEntry, NSSecureCoding, BSDebugDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<STStatusDomainDataDiff> diff;
@property (readonly, nonatomic) id clientKey;
@property (readonly, nonatomic) unsigned long long entryType;
@property (readonly, nonatomic) id<STStatusDomainData, STStatusDomainDataDifferencing> data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDiff:(id)a0 clientKey:(id)a1;

@end
