@class NSString, NSDate;

@interface EmailDaemon.EDSearchableNewMessageItem : NSObject <EDIndexableItem> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ domainIdentifier;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ update;
    void /* unknown type, empty encoding */ sizeInBytes;
}

@property (nonatomic, readonly) char alwaysMarkAsIndexed;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) long long estimatedSizeInBytes;
@property (nonatomic, readonly) char hasCompleteData;
@property (nonatomic, readonly) char requiresPreprocessing;
@property (nonatomic, readonly) char shouldExcludeFromIndex;
@property (nonatomic, readonly) char shouldIndexImmediatelyPostPreprocessing;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ itemInstantiationTime;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ indexingType;

- (id)init;
- (void).cxx_destruct;
- (id)searchableItem;
- (void)preprocess;
- (id)fetchIndexableAttachments;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;

@end
