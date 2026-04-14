@class NSArray, NSString;

@interface IMDExportConfiguration : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ limitToGUIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long sortOrder;
@property (nonatomic, readonly) long long batchSize;
@property (nonatomic, readonly) unsigned long long messagesExcluded;
@property (nonatomic, readonly) unsigned long long participantsIncluded;
@property (nonatomic, readonly) NSArray *limitToGUIDs;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBatchSize:(long long)a0 sortOrder:(long long)a1 messagesExcluded:(unsigned long long)a2 participantsIncluded:(unsigned long long)a3 limitToGUIDs:(id)a4;

@end
