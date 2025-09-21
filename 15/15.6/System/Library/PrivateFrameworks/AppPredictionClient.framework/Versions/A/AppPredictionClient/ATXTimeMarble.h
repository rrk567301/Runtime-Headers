@class NSString, NSDateComponents, NSDate;

@interface ATXTimeMarble : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbolName:(id)a0 colorName:(id)a1 dateComponents:(id)a2 title:(id)a3;

@end
