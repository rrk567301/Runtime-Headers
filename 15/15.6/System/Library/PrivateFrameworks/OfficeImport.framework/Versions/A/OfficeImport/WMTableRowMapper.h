@class WDTableRow;

@interface WMTableRowMapper : CMMapper {
    WDTableRow *mWdTableRow;
    double mHeight;
}

+ (char)isTableRowDeleted:(id)a0;

- (void).cxx_destruct;
- (double)height;
- (id)initWithWDTableRow:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)setRowProperties:(id)a0;

@end
