@class NSString, NSDate;

@interface IMCollaborationClearTransmission : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *collaborationId;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *guidString;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCollaborationId:(id)a0 date:(id)a1 guidString:(id)a2;

@end
