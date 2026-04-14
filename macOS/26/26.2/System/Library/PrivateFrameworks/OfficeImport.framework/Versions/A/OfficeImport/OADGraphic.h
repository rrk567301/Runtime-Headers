@interface OADGraphic : OADDrawable {
    OADGraphic *mMasterGraphic;
}

- (id)geometry;
- (void).cxx_destruct;
- (id)description;
- (id)graphicProperties;
- (id)masterGraphic;
- (void)setMasterGraphic:(id)a0;

@end
