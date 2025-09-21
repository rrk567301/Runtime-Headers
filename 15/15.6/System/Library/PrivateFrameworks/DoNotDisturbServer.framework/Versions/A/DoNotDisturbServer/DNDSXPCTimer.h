@class NSString, NSDate;

@interface DNDSXPCTimer : NSObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic, getter=isUserVisible) char userVisible;

- (void).cxx_destruct;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 userVisible:(char)a2;

@end
