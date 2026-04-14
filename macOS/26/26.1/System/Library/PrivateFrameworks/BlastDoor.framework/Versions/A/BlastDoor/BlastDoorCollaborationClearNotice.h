@class NSString, NSDate;

@interface BlastDoorCollaborationClearNotice : NSObject {
    void /* unknown type, empty encoding */ collaborationClearNotice;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSString *guidString;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *collaborationId;

- (void).cxx_destruct;
- (id)init;

@end
