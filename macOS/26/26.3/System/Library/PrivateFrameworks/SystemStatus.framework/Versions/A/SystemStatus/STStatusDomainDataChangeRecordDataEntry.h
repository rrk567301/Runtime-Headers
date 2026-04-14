@class NSString;
@protocol STStatusDomainDataDiff, STStatusDomainData, STStatusDomainDataDifferencing;

@interface STStatusDomainDataChangeRecordDataEntry : NSObject <STStatusDomainDataChangeRecordEntry, NSSecureCoding, BSDebugDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<STStatusDomainData, STStatusDomainDataDifferencing> data;
@property (readonly, nonatomic) id clientKey;
@property (readonly, nonatomic) unsigned long long entryType;
@property (readonly, nonatomic) id<STStatusDomainDataDiff> diff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0 clientKey:(id)a1;

@end
