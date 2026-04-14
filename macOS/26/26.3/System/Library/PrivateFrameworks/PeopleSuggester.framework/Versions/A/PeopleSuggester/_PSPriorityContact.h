@class NSString, CNContact;

@interface _PSPriorityContact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CNContact *contact;

- (id)initWithContact:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 contact:(id)a1;

@end
