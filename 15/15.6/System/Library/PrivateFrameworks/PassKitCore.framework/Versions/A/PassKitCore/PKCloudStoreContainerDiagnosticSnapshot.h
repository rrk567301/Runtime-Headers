@class NSDictionary;

@interface PKCloudStoreContainerDiagnosticSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *recordIDs;
@property (readonly, nonatomic) NSDictionary *localRecordIDs;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordIDs:(id)a0 localRecordIDs:(id)a1;

@end
