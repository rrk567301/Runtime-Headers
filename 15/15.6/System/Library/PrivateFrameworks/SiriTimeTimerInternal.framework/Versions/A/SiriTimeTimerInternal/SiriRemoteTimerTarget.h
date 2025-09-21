@class NSString, NSArray;

@interface SiriRemoteTimerTarget : INObject

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSArray *deviceNames;
@property (nonatomic, copy) NSArray *roomNames;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
