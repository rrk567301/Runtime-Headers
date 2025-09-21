@class NSData;

@interface SCROBrailleDisplayManagerStatus : NSObject

@property (retain, nonatomic) NSData *aggregatedData;
@property (nonatomic) int virtualAlignment;
@property (nonatomic) long long masterStatusCellIndex;
@property (nonatomic) char currentAnnouncementUnread;
@property (nonatomic) char anyUnreadAnnouncements;

- (void).cxx_destruct;

@end
