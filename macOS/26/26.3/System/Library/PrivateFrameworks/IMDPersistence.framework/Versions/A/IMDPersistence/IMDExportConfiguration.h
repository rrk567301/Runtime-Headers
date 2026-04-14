@class NSString;

@interface IMDExportConfiguration : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long sortOrder;
@property (nonatomic, readonly) long long batchSize;
@property (nonatomic, readonly) unsigned long long messagesExcluded;
@property (nonatomic, readonly) unsigned long long participantsIncluded;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBatchSize:(long long)a0 sortOrder:(long long)a1 messagesExcluded:(unsigned long long)a2 participantsIncluded:(unsigned long long)a3;

@end
