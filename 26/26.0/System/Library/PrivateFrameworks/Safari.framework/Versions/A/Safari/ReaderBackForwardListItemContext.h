@class NSURL, ReaderViewController;

@interface ReaderBackForwardListItemContext : NSObject

@property (readonly, nonatomic) ReaderViewController *readerViewController;
@property (readonly, nonatomic) NSURL *urlOfUnderlyingContent;
@property (nonatomic, getter=isActive) BOOL active;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReaderViewController:(id)a0 urlOfUnderlyingContent:(id)a1 active:(BOOL)a2;

@end
