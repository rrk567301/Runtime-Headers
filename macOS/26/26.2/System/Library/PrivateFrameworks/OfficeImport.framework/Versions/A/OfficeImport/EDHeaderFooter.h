@class NSString;

@interface EDHeaderFooter : NSObject {
    NSString *mHeaderString;
    NSString *mFooterString;
}

+ (id)headerFooter;

- (void).cxx_destruct;
- (id)headerString;
- (id)description;
- (id)footerString;
- (void)setFooterString:(id)a0;
- (void)setHeaderString:(id)a0;

@end
