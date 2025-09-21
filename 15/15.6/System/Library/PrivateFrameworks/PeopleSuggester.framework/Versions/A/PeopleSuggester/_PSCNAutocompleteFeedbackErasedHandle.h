@class CNContact;

@interface _PSCNAutocompleteFeedbackErasedHandle : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) CNContact *contact;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0;

@end
